#include<iostream>

using namespace std;

const int N=4;

template <typename T>

class Vector

{

  public:   

     Vector(T a[]);

     T Sum();

  private:  

     T v[N];

};

template <typename T>
Vector<T>::Vector(T a[])                 
{

    for(int i=0;i<N;i++)

       v[i]=a[i];

}
template <typename T>
T Vector<T>::Sum()

{

T sum=0.0;                  

for(int i=0;i<N;i++)

    sum=sum+v[i];

return sum;  

}

void main()

{

    int b[]={2,3,4,5};

    Vector<int>x(b);                   

cout<<"相加和为："<<x.Sum()<<endl;



    double a[]={4.8,1.1,2.6,3.7};

    Vector<double> y(a);

	cout<<"相加和为："<<y.Sum()<<endl;

}