#include<bits/stdc++.h>
using namespace std;

void a(int a){
    b(a)
}
void b(int a){
    c(a)
}
void c(int a){
    d(a)
}
void d(int a){
     cout<<a<<" \n";
}


void a1(int a){
    b1(a);
    c1(a);
    d1(a);
}
void b1(int a){
    e1(a);
    f1(a);
}
void c1(int a)
{
    g1(a);
    h1(a);
}
void d1(int a)
{
    i1(a);
    j1(a);
}
void e1(int a){
    cout<<a<<" \n";
}
void f1(int a){
    cout<<a<<" \n";
}
void g1(int a){
    cout<<a<<" \n";
}
void h1(int a){
    cout<<a<<" \n";
}
void i1(int a){
    cout<<a<<" \n";
}
void j1(int a){
    cout<<a<<" \n";
}

void g2(int a)
{
    cout << a << " \n";
}
void h2(int a)
{
    cout << a << " \n";
}
void i2(int a)
{
    cout << a << " \n";
}

void f2(int a)
{
    g2(a);
    h2(a);
    i2(a);
}

void d2(int a){
    f2(a);
}

void b2(int a){
    c2(a);
    d2(a);
    e2(a);
}

void a2(int a){
    b2(a);
}

void d3(int a)
{

    cout << a << " \n";
}
void e3(int a)
{
    cout << a << " \n";
}
void f3(int a)
{
    cout << a << " \n";
}

void c3(int a){
    d3(a);
    e3(a);
    f3(a);
}
void b3(int a){
c3(a);
}
void a3(int a){

    b3(a);
}


void f4(int a){
    cout << a << " \n";
}

void b4(int a){
d4(a);
}
void c4(int a){
e4(a);
}
void e4(int a){
f4(a);
}
void d4(int a){
f4(a);
}

void a4(int a){

b4( a);
c4( a);
}

int main(){

a(2);
a1(2);
a2(2);
a3(2);
a4(2);
return 0;
}