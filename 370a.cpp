#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

int movesRook(int sx,int sy,int ex,int ey){
	int dx,dy;
	dx=abs(sx-ex);
	dy=abs(sy-ey);
	if(dx > 0 and dy >0)
		return 2;
	else
		return 1;
}

int movesBishop(int sx,int sy,int ex,int ey){
	int dx,dy;
	dx=abs(sx-ex);
	dy=abs(sy-ey);
	//cout<<dx<<" "<<dy<<endl;
	if( dx == dy)
		return 1;
	else if((dx%2 == 0 and dy%2 == 0) or (dx%2 != 0 and dy%2 != 0))
		return 2;
	else 
		return 0;
}

int moveKing(int sx,int sy,int ex,int ey){
	int dx,dy;
	dx=abs(sx-ex);
	dy=abs(sy-ey);
	//cout<<dx<<" "<<dy<<endl;
	return max(dx,dy);
}

int main(){
	int sx,sy;
	cin>>sx>>sy;
	int ex,ey;
	cin>>ex>>ey;
	int rook=movesRook(sx,sy,ex,ey);
	int bishop=movesBishop(sx,sy,ex,ey);
	int king=moveKing(sx,sy,ex,ey);
	cout<<rook<<" "<<bishop<<" "<<king<<endl;
	return 0;
}
