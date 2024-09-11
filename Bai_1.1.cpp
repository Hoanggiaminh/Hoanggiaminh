#include <iostream>
#define MAXN 100
using namespace std;
void Nhap(int a[],int &n){
    cout <<"Nhap vao n: ";
    cin >> n;
    cout <<"Nhap vao mang: ";
    for(int i=0;i<n;i++)
        cin >> a[i];
}
void Xuat(int a[],int n){
    for(int i=0;i<n;i++)
        cout << a[i] << " ";
}
void Xoa(int a[],int &n,int k){
    if(k>=0 && k<n){
        for(int i=k;i<n-1;i++)
            a[i]=a[i+1];
        n--; 
    }
}
void Lonnhat(int a[],int n){
    int maxn=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>maxn) maxn=a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]==maxn)
            cout << i <<" ";
    }
}
void Nhonhat(int a[],int n){
    int minn=a[0];
    for(int i=1;i<n;i++){
        if(a[i]<minn) minn=a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]==minn)
            cout << i <<" ";
    }
}
int Phan_tu_am(int a[],int n){
    int cnt=0;
    for(int i=0;i<n;i++){
        if(a[i]<0) cnt++;
    }
    return cnt;
}
int So_am_max (int a[],int n){
    int maxn=-1e9;
    for(int i=0;i<n;i++){
        if(a[i]<0 && a[i]>maxn) maxn=a[i];
    }
    if (maxn==-1e9) return 0;
    else return maxn;
}
int So_duong_min (int a[],int n){
    int minn=1e9;
    for(int i=0;i<n;i++){
        if(a[i]>0 && a[i]<minn) minn=a[i];
    }
    if (minn==1e9) return 0;
    else return minn;
}
int Tim_kiem(int a[],int n,int x){
    for(int i=0;i<n;i++)
        if(a[i]==x) return i;
    return -1;
}
int Phan_tu_bang_x(int a[],int n,int x){
    int cnt=0;
    for(int i=0;i<n;i++)
        if(a[i]==x) cnt++;
    if (cnt==0) return -1;
    else return cnt;
}
int main()
{
    int a[MAXN],n,x,k;
    Nhap(a,n);
    cout << "Mang vua nhap la: "; Xuat(a,n);
    cout << "\nChi so nhung phan tu lon nhat trong mang: ";Lonnhat(a,n);
    cout << "\nChi so nhung phan tu nho nhat trong mang: ";Nhonhat(a,n);
    cout << "\nSo phan tu am co trong mang: " << Phan_tu_am(a,n);
    if(So_am_max(a,n)==0) cout << "\nKhong co so am lon nhat trong mang";
    else cout << "\nGia tri am lon nhat trong mang: " << So_am_max(a,n);
    if(So_duong_min(a,n)==0) cout << "\nKhong co so duong nho nhat trong mang";
    else cout << "\nGia tri duong nho nhat trong mang: " << So_duong_min(a,n);
    cout << "\nNhap vao x: "; cin >> x;
    if(Tim_kiem(a,n,x)==-1) cout << "Khong co phan tu nao co khoa bang x";
    else cout << "Chi so cua phan tu co khoa bang x la: " << Tim_kiem(a,n,x);
    if(Phan_tu_bang_x(a,n,x)==-1) cout << "\nKhong co phan tu nao co khoa bang x";
    else cout << "\nSo phan tu co gia tri bang x la: " << Phan_tu_bang_x(a,n,x);
    cout << "\nNhap chi so k: "; cin >> k;
    Xoa(a,n,k);
    cout << "Mang sau khi xoa: ";
    Xuat(a,n);
    return 0;
}