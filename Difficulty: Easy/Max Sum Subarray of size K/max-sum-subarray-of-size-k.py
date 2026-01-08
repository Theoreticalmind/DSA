class Solution:
    def maxSubarraySum(self, arr, k):
        n = len(arr)

        # Edge case
        if k > n:
            return None

        # Sum of first window
        window_sum = sum(arr[:k])
        max_sum = window_sum

        # Slide the window
        for i in range(k, n):
            window_sum += arr[i]      # add new element
            window_sum -= arr[i - k]  # remove old element
            max_sum = max(max_sum, window_sum)

        return max_sum
