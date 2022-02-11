# Testplan And Output
 |TEST ID|TEST CASE OBJECTIVE|INPUT DATA        |EXPECTED OUTPUT|ACTUAL OUTPUT|STATUS|
 |-------|-------------------|------------------|---------------|-------------|------|
 |TC_01  |for entering name  |enter name: abc   |abc            |abc          |pass  |
 |TC_02  |for entering name  |enter name: abc   |abc            |-            |fail  |
 |TC_03  |for entering age   |enter age: 12     |12             |12           |pass  |
 |TC_04  |for entering age   |enter age: 12     |12             |-            |fail  |
 |TC_05  |for entering salary|enter salary: 5000|5000           |5000         |pass  |
 |TC_06  |for entering salary|enter salary: 5000|5000           |-            |fail  |
 |TC_07  |for listing record |abc 12 5000	    |abc 12 5000    |abc 12 5000  |pass  |
 |TC_08  |for listing record |abc 12 5000       |abc 12 5000    |abc 5000 12  |fail  |
 |TC_09  |for listing record |abc 12 5000       |abc 12 5000    |12 abc 5000  |fail  |