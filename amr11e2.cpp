#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

//int a[1050]={30,42,66,70,78,102,105,110,114,130,138,154,165,170,174,182,186,190,195,222,230,231,238,246,255,258,266,273,282,285,286,290,310,318,322,345,354,357,366,370,374,385,399,402,406,410,418,426,429,430,434,435,442,455,465,470,483,494,506,518,530,555,561,574,590,595,598,602,609,610,615,627,638,645,646,651,658,663,665,670,682,705,710,715,741,742,754,759,777,782,795,805,806,814,826,854,861,874,885,897,902,903,915,935,938,946,957,962,969,986,987,994,1001,1005,1015,1023,1034,1045,1054,1065,1066,1085,1102,1105,1113,1118,1131,1166,1173,1178,1209,1221,1222,1235,1239,1258,1265,1281,1295,1298,1309,1311,1334,1342,1353,1378,1394,1406,1407,1419,1426,1435,1443,1462,1463,1474,1479,1491,1495,1505,1534,1547,1551,1558,1562,1581,1586,1595,1598,1599,1615,1634,1645,1653,1677,1702,1705,1729,1742,1749,1767,1771,1786,1798,1802,1833,1846,1855,1885,1886,1887,1947,1955,1978,2001,2006,2013,2014,2015,2035,2065,2067,2074,2091,2093,2109,2135,2139,2146,2162,2185,2193,2211,2233,2242,2255,2261,2278,2294,2301,2318,2337,2343,2345,2365,2378,2379,2387,2397,2405,2414,2431,2438,2451,2465,2485,2494,2542,2546,2553,2585,2613,2635,2639,2665,2666,2679,2697,2698,2703,2714,2717,2726,2737,2755,2769,2795,2806,2821,2829,2849,2914,2915,2945,2967,3009,3021,3034,3055,3059,3074,3082,3111,3145,3157,3182,3219,3243,3245,3266,3286,3289,3311,3335,3355,3363,3367,3417,3422,3441,3445,3451,3477,3478,3485,3515,3526,3538,3553,3565,3567,3619,3621,3655,3657,3658,3685,3689,3731,3741,3782,3813,3819,3835,3854,3857,3886,3895,3905,3913,3922,3965,3995,3999,4042,4047,4071,4081,4085,4089,4118,4123,4147,4154,4199,4209,4255,4277,4301,4346,4355,4366,4371,4402,4403,4433,4465,4495,4505,4514,4543,4551,4558,4611,4615,4623,4669,4697,4715,4773,4807,4823,4838,4879,4899,4921,4929,4945,4958,4982,4991,5002,5015,5035,5074,5083,5117,5133,5159,5185,5217,5246,5254,5289,5291,5307,5365,5369,5405,5423,5453,5467,5487,5494,5546,5551,5593,5605,5673,5681,5695,5719,5734,5735,5762,5781,5795,5797,5822,5829,5863,5883,5945,5957,6035,6061,6063,6095,6097,6106,6149,6177,6231,6235,6251,6254,6293,6298,6307,6355,6365,6409,6461,6466,6479,6519,6549,6601,6603,6665,6674,6721,6745,6771,6785,6815,6837,6851,6919,6923,7015,7021,7049,7102,7163,7198,7257,7259,7285,7337,7429,7437,7473,7503,7511,7526,7567,7579,7585,7611,7657,7667,7685,7705,7733,7843,7847,7869,7881,7906,7955,7973,8029,8041,8113,8165,8174,8177,8215,8241,8319,8323,8378,8437,8449,8533,8555,8569,8601,8643,8662,8671,8695,8723,8729,8733,8789,8815,8845,8897,8911,8987,9061,9139,9145,9159,9269,9331,9361,9367,9381,9443,9447,9455,9499,9503,9514,9541,9581,9635,9699,9715,9805,9821,9823,9889,9911,10011,10013,10105,10127,10153,10199,10295,10373,10385,10387,10619,10621,10653,10759,10787,10797,10865,10879,10915,11005,11033,11063,11077,11137,11285,11289,11339,11395,11407,11431,11501,11609,11687,11713,11803,11859,11891,11951,11977,12095,12121,12173,12259,12261,12331,12341,12383,12395,12455,12505,12529,12567,12617,12673,12685,12749,12803,12857,12993,13039,13079,13091,13115,13135,13237,13243,13277,13409,13481,13489,13547,13601,13717,13727,13735,13865,13889,13949,13981,14003,14053,14147,14271,14335,14405,14413,14467,14539,14555,14573,14663,14807,14839,14911,14927,14993,15067,15181,15211,15265,15281,15283,15407,15433,15457,15635,15691,15745,15799,15847,15953,16027,16031,16165,16169,16211,16523,16549,16685,16687,16813,16907,16933,16951,17081,17119,17329,17353,17437,17501,17507,17537,17641,17719,17755,17759,17917,17963,17995,18073,18239,18241,18361,18377,18389,18791,18815,18821,18941,19057,19129,19229,19393,19411,19459,19499,19703,19721,19765,19981,20033,20069,20119,20167,20213,20377,20387,20435,20539,20677,20683,20723,20801,20945,21197,21199,21229,21359,21371,21373,21571,21607,21641,21655,21793,21889,22043,22231,22243,22591,22607,22631,22649,22661,22847,22919,22933,22997,23069,23161,23171,23359,23693,23777,23785,23851,23903,24013,24149,24211,24583,24679,24769,24827,24857,25051,25069,25193,25259,25327,25493,25783,25789,25897,26129,26197,26273,26341,26381,26609,26657,26767,27001,27047,27269,27347,27401,27511,27671,27683,27761,27907,27931,28249,28379,28609,28613,28681,28823,28853,28897,29087,29203,29233,29279,29323,29341,29563,29627,29971,30073,30217,30229,30317,30503,30659,31027,31093,31217,31349,31447,31537,31691,32021,32147,32227,32383,32509,32513,32759,32981,33031,33041,33263,33299,33337,33497,33511,33583,33611,34099,34151,34357,34397,34639,34751,34891,35003,35309,35351,35563,35711,35929,36049,36593,36613,36707,36859,36917,36941,37111,37259,37271,37417,37453,37789,37843,38369,38399,38657,38743,39061,39121,39353,39463,39589,39689,39997,40549,40651,40687,40937,41123,41287,41393,41477,41819,42029,42067,42143,42253,42347,42517,42883,43129,43301,43381,43483,43493,43993,44321,44591,44659,44689,44957,45103,45961,46079,46139,46163,46483,46699,46787,47027,47101,47141,47329,47357,47519,47641,47647,47771,48203,48739,48919,48977,49321,49487,49837,49913,49979,50209,50431,50623,51127,51389,51901,51911,52193,52327,52417,52687,53041,53131,53159,53533,53909,54457,54473,54653,54739,54839,54961,55309,55637,55883,56303,56729,56869,57017,57293,57523,58007,58351,58609,59413,59737,59831,60233,60329,60367,60421,60791,61183,61427,61841,62651,63017,63181,63307,63403,63779,63829,63971,65453,65941,66091,66263,66953,67201,67363,67469,67673,68381,69479,69967,70151,70219,70649,71213,71497,71891,71921,72239,72427,72529,73573,73627,74359,74989,75107,76067,76183,76751,76849,77221,77531,77653,78647,79591,79663,80417,80869,81313,81437,81673,82289,82777,83143,83549,84419,85157,85963,86549,88537,88877,89311,90241,90383,90683,90919,91321,93757,94001,94643,96347,96773,96937,97619,99613,100223,102979,103447,104371,109127,109411,110081,114637,116653,118523,121481,125599,137953};

int main()
{
	FILE * f,*w;
	w=fopen("primes.txt","r");
	f=fopen("out1.txt","w+");
	int i,n;
	for(i=0;i<550;i++)
	{
		fscanf(w,"%d",&n);
//		printf("%d\n",n);
		fprintf(f,"%d,",n);
	}
	fclose(f);
	fclose(w);
	return 0;
}
