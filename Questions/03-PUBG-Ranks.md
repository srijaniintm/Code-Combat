# PUBG Ranks

> Emily is coordinating a PUBG competition in her college fest. In this competition all the matches are solo matches. She is keeping a track of ranks/results of the participants. Each Participant is given a token number starting from 0. This competition has a fascinating gift for a random participant. At the end of the fest, her teacher will select a random number(rank). The last participant with this rank will get a surprise gift and if there is no such participant print “-1”. Help Emily to select this participant. 

#### Input format:
First line consist a no N i.e. number of participants <br>
Second Line consist on N numbers representing ranks R[i] of each participants. <br>
Third Line consist a no r i.e. Selected Rank

#### Output Format:
Token number of last participant with the selected rank

#### Constraints:
1 <= N <= 1000 <br>
1 <= R[i],r <= 100

#### Sample Input 1:
15 <br>
56 1 23 3 78 5 3 4 5 78 56 1 3 6 1 <br>
3

#### Sample Output 1:
12

#### Explanation: 
Participant with 12th token is the last player who finished 3rd in the match.