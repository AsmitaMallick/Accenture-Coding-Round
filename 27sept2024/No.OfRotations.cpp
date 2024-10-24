#include<bits/stdc++.h>
using namespace std;
int main(){

int x, y;
cout<<"x and y of circle";
cin>>x>>y;
int x1, y1;
cout<<"point to reach";
cin>>x1>>y1;

cout<<"radius of circle";
cout<<x;
double l = pow(x1-x, 2)+pow(y1-y, 2);
double distance = sqrt(l);

double circum = (2*M_PI*x);
double rotations = distance/circum;

cout<<"no. of rotations"<<rotations;
return 0;
}

// in the question, radius is not given as the input, x coordinate will be the radius
