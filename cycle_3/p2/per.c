/************************************************************************************************/	
/* Name of the Program	:	per.c                                      			*/
/* Aim			:	Print percentage value from 1 -100 of a number using recursion  */
/* Author		:	Sashwat K   		                   			*/
/* Date Written		:	06/10/2017				   			*/
/* Revision		:	1					   			*/
/************************************************************************************************/

/************************************************************************************************/
/* Program								   */
/* num			:	To store value from user       		   */
/* i			:	To store value 1			   */
/* nn			:	To store num value in function	   	   */

#include<stdio.h>
void recursion(int ,float);
main()
{
 float num;
 printf("Enter a value to split in percentage: ");
 scanf("%f",&num);
 recursion(1,num);
}

void recursion(int i,float nn)
{
 if(i>100)
 {
  return;
 } 
 else
 {
  printf("%d %% = %f \n",i,(nn*i)/100);
 }
 recursion(i=i+1,nn);
}

/* Output	:							


Enter a value to split in percentage: 13
1 % = 0.130000 
2 % = 0.260000 
3 % = 0.390000 
4 % = 0.520000 
5 % = 0.650000 
6 % = 0.780000 
7 % = 0.910000 
8 % = 1.040000 
9 % = 1.170000 
10 % = 1.300000 
11 % = 1.430000 
12 % = 1.560000 
13 % = 1.690000 
14 % = 1.820000 
15 % = 1.950000 
16 % = 2.080000 
17 % = 2.210000 
18 % = 2.340000 
19 % = 2.470000 
20 % = 2.600000 
21 % = 2.730000 
22 % = 2.860000 
23 % = 2.990000 
24 % = 3.120000 
25 % = 3.250000 
26 % = 3.380000 
27 % = 3.510000 
28 % = 3.640000 
29 % = 3.770000 
30 % = 3.900000 
31 % = 4.030000 
32 % = 4.160000 
33 % = 4.290000 
34 % = 4.420000 
35 % = 4.550000 
36 % = 4.680000 
37 % = 4.810000 
38 % = 4.940000 
39 % = 5.070000 
40 % = 5.200000 
41 % = 5.330000 
42 % = 5.460000 
43 % = 5.590000 
44 % = 5.720000 
45 % = 5.850000 
46 % = 5.980000 
47 % = 6.110000 
48 % = 6.240000 
49 % = 6.370000 
50 % = 6.500000 
51 % = 6.630000 
52 % = 6.760000 
53 % = 6.890000 
54 % = 7.020000 
55 % = 7.150000 
56 % = 7.280000 
57 % = 7.410000 
58 % = 7.540000 
59 % = 7.670000 
60 % = 7.800000 
61 % = 7.930000 
62 % = 8.060000 
63 % = 8.190000 
64 % = 8.320000 
65 % = 8.450000 
66 % = 8.580000 
67 % = 8.710000 
68 % = 8.840000 
69 % = 8.970000 
70 % = 9.100000 
71 % = 9.230000 
72 % = 9.360000 
73 % = 9.490000 
74 % = 9.620000 
75 % = 9.750000 
76 % = 9.880000 
77 % = 10.010000 
78 % = 10.140000 
79 % = 10.270000 
80 % = 10.400000 
81 % = 10.530000 
82 % = 10.660000 
83 % = 10.790000 
84 % = 10.920000 
85 % = 11.050000 
86 % = 11.180000 
87 % = 11.310000 
88 % = 11.440000 
89 % = 11.570000 
90 % = 11.700000 
91 % = 11.830000 
92 % = 11.960000 
93 % = 12.090000 
94 % = 12.220000 
95 % = 12.350000 
96 % = 12.480000 
97 % = 12.610000 
98 % = 12.740000 
99 % = 12.870000 
100 % = 13.000000 
								
*/
