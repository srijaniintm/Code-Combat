# Student Coordinator

> Your college has organized a seminar of Deep Learning. You, being the coordinator of the event, are responsible for maintaining discipline and order in the hall. Your professor has asked you to make M1 section students to sit in the front rows, followed by M2 in immediate next rows, followed by M3. There are only 3 sections M1, M2 and M3.

#### Input format:
T - Number of Test Cases <br>
N – Number of Students <br>
Student[i] – Section of ith student

#### Output Format:
List of students sorted according to their sections.

#### Constraints:
1 <= T <= 1000 <br>
1 <= N, Student[i] <= 10<sup>18</sup>

#### Sample Input:
2 <br>
7 <br>
M2 M1 M1 M3 M3 M1 M2 <br>
10 <br>
M3 M2 M3 M1 M2 M2 M1 M2 M3 M2

#### Sample Output:
M1 M1 M1 M2 M2 M3 M3 <br>
M1 M1 M2 M2 M2 M2 M2 M3 M3 M3