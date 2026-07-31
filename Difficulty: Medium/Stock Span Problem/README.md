<h2><a href="https://www.geeksforgeeks.org/problems/stock-span-problem-1587115621/1">Stock Span Problem</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO" style="--text-color: var(--problem-text-color);"><p><span style="font-size: 14pt;">The stock span problem is a financial problem where we have a series of daily price quotes for a stock and we need to calculate the span of stock price for all days.</span></p>
<p><span style="font-size: 14pt;">G</span><span style="font-size: 14pt;"><span style="font-size: 18.6667px;">iven an array <strong>arr[]</strong> representing daily stock prices, the stock span for the <strong>i-th</strong> day is the number of consecutive days up to day i (including day i itself) for which the price of the stock is <strong>less than or equal</strong> to the price on day <strong>i</strong>. Return the span of stock prices for each day in the given sequence.</span><br></span></p>
<p><span style="font-size: 14pt;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input:</strong> arr[] = [100, 80, 90, 120]
<strong>Output:</strong> [1, 1, 2, 4]
<strong>Explanation:</strong> Consider each day one by one:<br>Day 1 (100): Span = 1.
Day 2 (80): Span = 1 because the previous price (100) is greater than 80.
Day 3 (90): Span = 2 because 80 ≤ 90, but 100 &gt; 90.
Day 4 (120): Span = 4 because 100, 80, and 90 are all less than or equal to 120.
Hence, the output is [1, 1, 2, 4].
</span></pre>
<pre><span style="font-size: 14pt;"><strong style="font-size: 14pt;">Input</strong><span style="font-size: 14pt;"><strong>:</strong> arr[] = [10, 4, 5, 90, 120, 80]
</span><strong style="font-size: 14pt;">Output</strong><span style="font-size: 14pt;"><strong>:</strong> [1, 1, 2, 4, 5, 1]
</span><strong style="font-size: 14pt;">Explanation</strong><span style="font-size: 14pt;"><strong>:</strong> </span><span style="font-size: 18.6667px;">Consider each day one by one:</span><span style="font-size: 14pt;"><br></span><span style="font-size: 18.6667px;">Day 1 (10): Span = 1.
Day 2 (4): Span = 1 because the previous price (10) is greater than 4.
Day 3 (5): Span = 2 because 4 ≤ 5, but 10 &gt; 5.
Day 4 (90): Span = 4 because 10, 4, and 5 are all less than or equal to 90.
Day 5 (120): Span = 5 because all previous prices are less than or equal to 120.
Day 6 (80): Span = 1 because the previous price (120) is greater than 80.
Hence, the output is [1, 1, 2, 4, 5, 1].</span></span></pre></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Flipkart</code>&nbsp;<code>Accolite</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>Samsung</code>&nbsp;<code>Adobe</code>&nbsp;<code>NPCI</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Stack</code>&nbsp;