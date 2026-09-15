<h2><a href="https://www.geeksforgeeks.org/problems/prerequisite-tasks/1">Prerequisite Tasks</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO" style="--text-color: var(--problem-text-color);"><p><span style="font-size: 18px;">Given<strong> n</strong> tasks numbered from 0 to n - 1 and a list of <strong>p</strong> prerequisite pairs <strong>pre[][]</strong>, where each pair <strong>[a, b]</strong> means that task <strong>b</strong> must be completed before task <strong>a</strong>, determine whether it is possible to complete all the tasks.</span></p>
<p><span style="font-size: 18px;">Return<strong> true</strong> if all tasks can be finished; otherwise, return <strong>false</strong>.</span></p>
<p><span style="font-size: 18px;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>n = 4, pre[][] = [[1,0],[2,1],[3,2]]
<strong>Output: </strong>true
<strong>Explanation</strong>: To do task 1 you should have completed task 0, and to do task 2 you should have finished task 1, and to do task 3 you should have finished task 2. So it is possible.</span>
</pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>n = 2, pre[][] = [[1,0],[0,1]]
<strong>Output: </strong>false
<strong>Explanation</strong>: To do task 1 you should have completed task 0, and to do task 0 you should have finished task 1. So it is impossible.
</span></pre>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ n ≤ 10<sup>4</sup><br>1 ≤ p ≤ 10<sup>5</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>Google</code>&nbsp;<code>Facebook</code>&nbsp;<code>Twitter</code>&nbsp;<code>Apple</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Graph</code>&nbsp;