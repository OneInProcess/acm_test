#include <iostream>
#include <cstdlib>

using namespace std;
void judge(int num);
void method1(int n);
void judge1(char c,int num,int& x,int& y);
void methodN(int x,int y,int num);
void methodW(int x,int y,int num);
void methodE(int x,int y,int num);
void methodS(int x,int y,int num);
void judge2(char c,int num,int &x,int &y);
void methodN2(int x,int y,int num);
void methodW2(int x,int y,int num);
void methodE2(int x,int y,int num);
void methodS2(int x,int y,int num);
void initial();
bool floor[50][50];
int main() {
    int num;
    cin>>num;
    judge(num);
    return 0;
}
void judge(int num){
    if(num==0){
        exit(0);

    } else{
        method1(num);
    }
}
void method1(int n){
    string x;
    cin>>x;
    for(int i=0;i<50;i++){
        for(int j=0;j<50;j++){
            floor[i][j]=true;
        }
    }
    for(int i=10;i<30;i++){
        floor[i][24]= false;
    }
    int xx=24;
    int yy=29;
    int xxx=24;
    int yyy=29;
    for(int i=0;i<n;i++){
        if(i<20){
            floor[10+i][24]=true;
        } else{
            int p=i-20;
            judge2(x[p],i,yyy,xxx);
        }
        judge1(x[i],i,yy,xx);
    }
    cout<<"The worm successfully made all "<<n<<" moves."<<endl;
    initial();
}
void judge1(char c,int num,int& x,int& y){
    if(c=='N'){
        methodN(x,y,num);
        y=y-1;
    }if(c=='E'){
        methodE(x,y,num);
        x=x+1;
    }if(c=='W'){
        methodW(x,y,num);
        x=x-1;
    }if(c=='S'){
        methodS(x,y,num);
        y=y+1;
    }
}
void methodN(int x,int y,int num){
    if(x>=50|y>=50|x<0|y-1<0){
        cout<<"The worm ran off the board on move "<<num+1<<"."<<endl;
        initial();
    }else{
        floor[x][y-1]=!floor[x][y-1];
        if(floor[x][y-1]){
            cout<<"The worm ran into itself on move "<<num+1<<"."<<endl;
            initial();
        }
    }

}
void methodE(int x,int y,int num){
    if(x+1>=50|y>=50|x<0|y<0){
        cout<<"The worm ran off the board on move "<<num+1<<"."<<endl;
        initial();
    }else{floor[x+1][y]=!floor[x+1][y];
        if(floor[x+1][y]){
            cout<<"The worm ran into itself on move "<<num+1<<"."<<endl;
            initial();
        }
    }

}
void methodS(int x,int y,int num){
    if(x>=50|y+1>=50|x<0|y<0){
        cout<<"The worm ran off the board on move "<<num+1<<"."<<endl;
        initial();
    }else{floor[x][y+1]=!floor[x][y+1];
        if(floor[x][y+1]){
            cout<<"The worm ran into itself on move "<<num+1<<"."<<endl;
            initial();
        }
    }


}
void methodW(int x,int y,int num){
    if(x>=50|y>=50|x-1<0|y<0){
        cout<<"The worm ran off the board on move "<<num+1<<"."<<endl;
        initial();
    }else{floor[x-1][y]=!floor[x-1][y];
        if(floor[x-1][y]){
            cout<<"The worm ran into itself on move "<<num+1<<"."<<endl;
            initial();
        }
    }

}
void judge2(char c,int num,int &x,int &y){
    if(c=='N'){
        methodN2(x,y,num);
        y=y-1;
    }if(c=='E'){
        methodE2(x,y,num);
        x=x+1;
    }if(c=='W'){
        methodW2(x,y,num);
        x=x-1;
    }if(c=='S'){
        methodS2(x,y,num);
        y=y+1;
    }
}
void methodN2(int x,int y,int num){

        floor[x][y-1]=!floor[x][y-1];

    }

void methodE2(int x,int y,int num){
   floor[x+1][y]=!floor[x+1][y];

}
void methodS2(int x,int y,int num){
    floor[x][y+1]=!floor[x][y+1];


}
void methodW2(int x,int y,int num){
    floor[x-1][y]=!floor[x-1][y];


}
void initial(){
    int n;
    cin >>n;
    for(int i=0;i<50;i++){
        for(int j=0;j<50;j++){
            floor[i][j]=true;
        }
    }
    for(int i=10;i<30;i++){
        floor[i][24]= false;
    }
    judge(n);
}