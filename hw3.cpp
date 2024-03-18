#include <iostream>
#include <cmath>

using namespace std;

int main() {
    //log(x) 미분
    cout << "log(x)\n\n";
    double x;
    double N=0.1;
    double N2=0.05;
    double N3=0.03;
    double N4=0.01;
    cout << "x : ";
    cin >> x;
    double A_result = 1/x;
    double N_result = (log(x + N) - log(x - N)) / (2 * N);
    double N_result2 = (log(x + N2) - log(x - N2)) / (2 * N2);
    double N_result3 = (log(x + N3) - log(x - N3)) / (2 * N3);
    double N_result4 = (log(x + N4) - log(x - N4)) / (2 * N4);
    cout <<"Analytic: " << A_result <<"\tnumerical: " <<N_result<< endl;
    cout << "error : "<<(N_result-A_result)/A_result*100<<"%\n";
    
    cout <<"\nN = 0.05 Analytic: " << A_result <<"\tnumerical: " <<N_result2;
    cout << "\terror : "<<(N_result2-A_result)/A_result*100<<"%\n";
    cout <<"N = 0.03 Analytic: " << A_result <<"\tnumerical: " <<N_result3;
    cout << "\terror : "<<(N_result3-A_result)/A_result*100<<"%\n";
    cout <<"N = 0.01 Analytic: " << A_result <<"\tnumerical: " <<N_result4;
    cout << "\terror : "<<(N_result4-A_result)/A_result*100<<"%\n";
    
    //log(x) 적분 !! log (1)은 0이라 위에서 x 입력값을 2이상으로 !!
    double a, b;
    int I_N;
    cout << "\n\na b N\n";
    cin >> a >> b >> I_N;
    double dt = (b - a) / I_N;
    double integral_num = 0;
    for (int i = 1; i < I_N; ++i) {
        integral_num += log(x) * dt;
    }
    double integral_analytic = b*log(x)-a*log(x);
    /* logx 적분하면 아래 식이지만
    (b * log(b) - b) - (a * log(a) - a)+C logx(x는 정수)를 적분해야해서 식이 다름*/
    cout <<"Analytic: " << integral_analytic <<"\tnumerical: " <<integral_num<< endl;
    cout << "error : "<<(integral_num-integral_analytic)/integral_analytic*100<<"%\n";

    //sin(x) 미분
    cout << "\n\n\n\n";
    cout << "sin(x)\n\n";//수정
    cout << "x : ";
    cin >> x;
    A_result = cos(x); //수정
    N_result = (sin(x + N) - sin(x - N)) / (2 * N); //수정
    N_result2 = (sin(x + N2) - sin(x - N2)) / (2 * N2); //수정
    N_result3 = (sin(x + N3) - sin(x - N3)) / (2 * N3); //수정
    N_result4 = (sin(x + N4) - sin(x - N4)) / (2 * N4); //수정
    cout <<"Analytic: " << A_result <<"\tnumerical: " <<N_result<< endl;
    cout << "error : "<<(N_result-A_result)/A_result*100<<"%\n";
    
    cout <<"\nN = 0.05 Analytic: " << A_result <<"\tnumerical: " <<N_result2;
    cout << "\terror : "<<(N_result2-A_result)/A_result*100<<"%\n";
    cout <<"N = 0.03 Analytic: " << A_result <<"\tnumerical: " <<N_result3;
    cout << "\terror : "<<(N_result3-A_result)/A_result*100<<"%\n";
    cout <<"N = 0.01 Analytic: " << A_result <<"\tnumerical: " <<N_result4;
    cout << "\terror : "<<(N_result4-A_result)/A_result*100<<"%\n";
    
    //sin(x) 적분
    cout << "\n\na b N\n";
    cin >> a >> b >> I_N;
    dt = (b - a) / I_N;
    integral_num = 0;
    for (int i = 1; i < I_N; ++i) {
        integral_num += sin(x) * dt; //수정
    }
    integral_analytic = (sin(x)*b)-(sin(x)*a);//수정
    cout <<"Analytic: " << integral_analytic <<"\tnumerical: " <<integral_num<< endl;
    cout << "error : "<<(integral_num-integral_analytic)/integral_analytic*100<<"%\n";

    //cos(x) 미분
    cout << "\n\n\n\n";
    cout << "cos(x)\n\n";//수정
    cout << "x : ";
    cin >> x;
    A_result = -sin(x); //수정
    N_result = (cos(x + N) - cos(x - N)) / (2 * N); //수정
    N_result2 = (cos(x + N2) - cos(x - N2)) / (2 * N2); //수정
    N_result3 = (cos(x + N3) - cos(x - N3)) / (2 * N3); //수정
    N_result4 = (cos(x + N4) - cos(x - N4)) / (2 * N4); //수정
    cout <<"Analytic: " << A_result <<"\tnumerical: " <<N_result<< endl;
    cout << "error : "<<(N_result-A_result)/A_result*100<<"%\n";
    
    cout <<"\nN = 0.05 Analytic: " << A_result <<"\tnumerical: " <<N_result2;
    cout << "\terror : "<<(N_result2-A_result)/A_result*100<<"%\n";
    cout <<"N = 0.03 Analytic: " << A_result <<"\tnumerical: " <<N_result3;
    cout << "\terror : "<<(N_result3-A_result)/A_result*100<<"%\n";
    cout <<"N = 0.01 Analytic: " << A_result <<"\tnumerical: " <<N_result4;
    cout << "\terror : "<<(N_result4-A_result)/A_result*100<<"%\n";
    
    //cos(x) 적분
    cout << "\n\na b N\n";
    cin >> a >> b >> I_N;
    dt = (b - a) / I_N;
    integral_num = 0;
    for (int i = 1; i < I_N; ++i) {
        integral_num += cos(x) * dt; //수정
    }
    integral_analytic = (cos(x)*b)-(cos(x)*a);//수정
    cout <<"Analytic: " << integral_analytic <<"\tnumerical: " <<integral_num<< endl;
    cout << "error : "<<(integral_num-integral_analytic)/integral_analytic*100<<"%\n";

    
    return 0;
}
