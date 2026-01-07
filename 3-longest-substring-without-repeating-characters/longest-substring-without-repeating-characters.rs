impl Solution {
    pub fn length_of_longest_substring(s: String) -> i32 {
        let mut last = vec![-1; 256];   // last seen index of each char
        let mut left: i32 = 0;
        let mut max_len: i32 = 0;

        for (right, ch) in s.bytes().enumerate() {
            let idx = ch as usize;

            // If character was seen inside current window
            if last[idx] >= left {
                left = last[idx] + 1;
            }

            // Update last seen position
            last[idx] = right as i32;

            // Update max length
            max_len = max_len.max(right as i32 - left + 1);
        }

        max_len
    }
}
