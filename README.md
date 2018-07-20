本程式為學生的學期成績列表，主要有三個功能：
1. 顯示所有學生的成績列表
2. 新增學生成績
3. 離開本程式
<br/>
而輸入完學生資料、平時成績、期中考成績、期末考成績後，本程式會自動算出最終的學期總成績，並顯示於列表上。<br/>
(學期成績 = 平時成績 * 0.3 + 期中考 * 0.3 + 期末考 * 0.4)
<br/><br/>
本程式是以讀檔、寫檔的方式來運作的。<br/>
首先第一個功能，是使用讀檔的方式，將存在記事本中的學生資料讀取進來，存進本程式的 struct 中，再進行學期總成績的計算。<br/>
第二個功能，是使用寫檔的方式，將使用者輸入的資料存進 struct 中，再將 struct 中的資料存進記事本中。

<br/><br/>
![image](https://github.com/veryjimmy/Cpp-Programming_hw8/blob/master/ex1.png)
![image](https://github.com/veryjimmy/Cpp-Programming_hw8/blob/master/ex2.png)
![image](https://github.com/veryjimmy/Cpp-Programming_hw8/blob/master/ex3.png)