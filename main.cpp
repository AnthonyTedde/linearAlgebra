#include <iostream>
#include <Eigen/Dense>
#include <vector>

using Eigen::MatrixXd;
using namespace std;

// saxpy operation
vector<double> saxpy(const vector<double>&,
                     const vector<double>&,
                     double);

// dot product
double dot(const vector<double>&,
           const vector<double>&);

int main() {

    std::vector<double> v{1., 2., 3., 4.};
    std::vector<double> u{1., 2., 3., 4.};
    std::vector<double> x(4);
    int a{3}, c{0};

    x = saxpy(v, u, a);
    cout << x[0] << endl;

    c = dot(v, u);
    cout << c << endl;

}

vector<double> saxpy(const vector<double> &v,
                     const vector<double> &u,
                     double a)
{
    vector<double> x = v;
    for(auto i=0; i<v.size(); i++){
        x[i] += a * u[i];
    }
    return x;
}

double dot(const vector<double> &x,
           const vector<double> &y){
    double a = 0;
    for(auto i=0; i<x.size(); i++){
        a += x[i] * y[i];
    }
    return a;
}