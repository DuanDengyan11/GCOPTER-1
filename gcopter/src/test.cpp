#include<iostream>
using namespace std;
#include <vector>
#include <Eigen/Eigen>

int main()
{
    Eigen::Vector3d timeAlloc={3,2,1};
    float i = 4.0;
    cout<<"hello world"<<endl;
    cout<<timeAlloc.segment(0,1)<<endl;

    return 0;
}