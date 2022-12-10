//#include <stdio.h>
//#include <stdbool.h>
//#include <stdbool.h>
//
//#include "fourpoint.h"
//
//
//
//double Distance(char p1, char p2)
//{
//	double distance;
//	distance = ((p1[0] - p2[0]) * (p1[0] - p2[0])) + ((p1[1] - p2[1]) * (p1[1] - p2[1]));
//	return distance;
//	//square of distance
//};
//bool MidPoint(char p1, char p2, char p3, char p4)
//{
//	double MidX, MidY;//midpoint
//	double dis1, dis2, dis3, dis4;
//	char Midp[2];
//	MidX = (p1[0] + p2[0] + p3[0] + p4[0]) / 4;
//	MidY = (p1[1] + p2[1] + p3[1] + p4[1]) / 4;
//	//find the midpoint of the four points
//	Midp[0] = MidX;
//	Midp[1] = MidY;
//	dis1 = Distance(p1, Midp);
//	dis2 = Distance(p2, Midp);
//	dis3 = Distance(p3, Midp);
//	dis4 = Distance(p4, Midp);
//	return dis1 == dis2 && dis2 == dis3 && dis3 == dis4;
//};