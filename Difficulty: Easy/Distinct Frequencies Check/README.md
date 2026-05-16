<h2><a href="https://www.geeksforgeeks.org/problems/unique-frequencies-of-not/1">Distinct Frequencies Check</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO" style="--text-color: var(--problem-text-color);"><p><span style="font-size: 14pt;">Given an array <strong>arr[]</strong> of integers, the task is to check whether the frequency of the elements in the array is unique or not. Or in other words, there are no two <strong>distinct</strong> numbers in array with equal frequency. If all the frequency is unique then return <strong>true</strong>, else return <strong>false</strong>.</span></p>
<p><span style="font-size: 14pt;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>I</strong><strong>nput: </strong>arr[] = [1, 1, 2, 5, 5]
<strong>Output: </strong>false
<strong>Explanation:<br></strong>The array contains 2 (1’s), 1 (2’s) and 2 (5’s), since the number of frequency of 1 and 5 are the same i.e. 2 times. Therefore, this array does not satisfy the condition.
</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>arr[] = [2, 2, 5, 10, 1, 2, 10, 5, 10, 2]
<strong>Output: </strong>true
<strong>Explanation:</strong>
Number of 1’s -&gt; 1
Number of 2’s -&gt; 4
Number of 5’s -&gt; 2
Number of 10’s -&gt; 3.
Since, the number of occurrences of elements present in the array is unique, this array satisfy the condition.</span></pre>
<pre><span style="font-size: 14pt;"><strong>I</strong><strong>nput: </strong>arr[] = [1, 1, 1]
<strong>Output: </strong>true
<strong>Explanation:</strong></span></pre>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong><br>1 ≤ arr.size() ≤ 10<sup>5</sup><br>-10<sup>9</sup> ≤ arr[i] ≤ 10<sup>9</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>PayPal</code>&nbsp;<code>Bloomberg</code>&nbsp;<code>Adobe</code>&nbsp;<code>Google</code>&nbsp;<code>Amazon</code>&nbsp;<code>Apple</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>set</code>&nbsp;<code>Sorting</code>&nbsp;<code>Map</code>&nbsp;