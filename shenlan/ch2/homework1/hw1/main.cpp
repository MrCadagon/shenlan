#include <iostream>
// Eigen 部分
#include <Eigen/Core>
// 稠密矩阵的代数运算（逆，特征值等）
#include <Eigen/Dense>

using namespace std;
int main(int argc, char **argv) {
    Eigen::MatrixXd matrix_A;
    matrix_A=Eigen::MatrixXd::Random(100,100);
    
    Eigen::MatrixXd matrix_B;
    matrix_B=Eigen::MatrixXd::Random(100,1);
    
    if(matrix_A.determinant()==0)
    {
        cout<<"ERROR"<<endl;
    }
    else
    {
        cout<<"use A.inverse * B="<<matrix_A.inverse()*matrix_B<<endl;
        cout<<"use QR:"<<matrix_A.colPivHouseholderQr().solve(matrix_B)<<endl;
    }
    
    return 0;
}
