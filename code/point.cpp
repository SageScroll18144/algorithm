#include <bits/stdc++.h>

using namespace std;

#define point pair<double, double>
#define x first
#define y second

#define line pair<point, point>

//soma vetorial
point sum(point a, point b){
    point ans;

    ans.x = a.x + b.x;
    ans.y = a.y + b.y;

    return ans;
}

//após de um vetor
point neg(point a){
    point ans;

    ans.x = -a.x;
    ans.y = -a.y;

    return ans;
}

//produto escalar
double dot(point a, point b){
    return a.x*b.x+a.y*b.y;
}

//produto vetorial
double cross(point a, point b){
    return a.x*b.y - a.y*b.x;
}

//distancia euclidiana
double euclidean(point a, point b){
    return sqrt((a.x-b.x)*(a.x-b.x) + (a.y-b.y)*(a.y-b.y)); 
}
/*
//distancia de um ponto para uma linha
double dist(point a, line b){
    double crs = cross(point(a - b.first), point(b.second - b.first));
    return abs(crs/dist(b.first, b.second));
}

//calcula area de um poligono pelo formula de shoelace
double area(vector<point> &p){
    double ret = 0;
    for(int i=2; i<p.size();i++){
        ret+=cross(p[i]-p[0], p[i-1]-p[0])/2;
    }
    return ret;
}

//retorna se é convexo ou concavo 
bool ccw(point a, point b, point c){
    double ret = cross(b-a, c-b);
    return ret < 0;
}*/

int main(){

    
    point a = {0,0};
    point b = {0,1};
    point c = {1,1};
    point d = {1,0};

    vector<point> v = {a, b, c, d};

    cout<<cross(c, d)<<endl;

    return 0;
}