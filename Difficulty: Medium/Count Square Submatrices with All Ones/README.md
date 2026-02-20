<h2><a href="https://www.geeksforgeeks.org/problems/count-square-submatrices-with-all-ones/1">Count Square Submatrices with All Ones</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a <strong>N*M</strong>&nbsp;matrix of ones and zeros, return how many <strong>square</strong> <strong>submatrices</strong> have all ones.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<div style="background:#eee;border:1px solid #ccc;padding:5px 10px;"><span style="font-size:18px"><strong>Input:</strong><br>
N = 3<br>
M = 4<br>
matrix [ ][ ] =<br>
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp;[&nbsp;[0, 1, 1, 1],<br>
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; [1, 1, 1, 1],&nbsp;<br>
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; [0, 1, 1, 1] ]<br>
<strong>Output: </strong>15<br>
<strong>Explanation:</strong>&nbsp;<br>
There are <strong>10 </strong>squares of side 1.<br>
There are <strong>4</strong> squares of side 2.<br>
There are <strong>1</strong>&nbsp;squares of side 3.<br>
Total number of squares = 10 + 4 + 1 =<strong>15</strong></span></div>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<div style="background:#eee;border:1px solid #ccc;padding:5px 10px;"><span style="font-size:18px"><strong>Input:</strong><br>
N = 3<br>
M = 3<br>
matrix [ ][ ] =<br>
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; [&nbsp;[1, 0, 1],<br>
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; [1, 1, 0],&nbsp;<br>
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; [1, 1, 0] ]<br>
<strong>Output: </strong>7<br>
<strong>Explanation:</strong>&nbsp;<br>
There are <strong>6&nbsp;</strong>squares of side 1.<br>
There are <strong>1</strong> squares of side 2.<br>
Total number of squares = 6&nbsp;&nbsp;+ 1 =<strong>7</strong></span></div>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>countSquares()</strong>&nbsp;which takes the interger <strong>N</strong>, integer <strong>M</strong>&nbsp;and 2D integer&nbsp;array&nbsp;<strong>matrix[ ][ ]&nbsp;</strong>as parameters and returns the&nbsp;number of <strong>square</strong> <strong>submatrices</strong> have all ones.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N*M)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N,M ≤&nbsp; 3*10<sup>3</sup></span><br>
<span style="font-size:18px">0 ≤ matrix [ i ][ j ]</span><span style="font-size:18px">&nbsp;≤ 1</span></p>
</div>