<h2><a href="https://www.geeksforgeeks.org/problems/check-if-there-exists-a-subsequence-with-sum-k/1">Subsequence with Sum K</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO" style="--text-color: var(--problem-text-color);"><p><span style="font-size: 18px;">Given an array <strong>arr&nbsp;</strong>and&nbsp;<code>target sum <strong>k</strong></code>, check whether there exists a subsequence such that the sum of all elements in the subsequence equals to k.</span></p>
<p><span style="font-size: 18px;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>arr = [10, 1, 2, 7, 6, 1, 5], k = 8.
<strong>Output: </strong>true
<strong>Explanation: </strong>Subsequences like [2, 6], [1, 7] sum upto 8</span>
</pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>arr = [2, 3, 5, 7, 9], k = 100. </span>
<span style="font-size: 18px;"><strong>Output:</strong> false</span>
<span style="font-size: 18px;"><strong>Explanation: </strong>No subsequence can sum upto 100</span></pre>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ arr.length ≤ 2000<br>1 ≤ arr[i] ≤ 1000<br>1 ≤ target ≤ 2000</span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Dynamic Programming</code>&nbsp;