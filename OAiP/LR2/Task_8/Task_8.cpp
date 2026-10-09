#include <iostream>
#include <cmath>

int main() {
    double x1, y1, x2, y2, x3, y3;
    std::cout << "Введите x1, y1, x2, y2, x3, y3: ";
    std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    double s1 = sqrt( pow(x2-x1, 2) + pow(y2-y1, 2));
    double s2 = sqrt( pow(x3-x2, 2) + pow(y3-y2, 2));
    double s3 = sqrt( pow(x1-x3, 2) + pow(y1-y3, 2));

    std::cout << "Длины сторон треугольника равны: " << s1 << " " << s2 << " " << s3 << std::endl;

    double p = ( s1 + s2 + s3 ) / 2;
    double S = sqrt( p * ( p - s1 ) * ( p - s2 ) * ( p - s3 ));
    double h1 = ( 2 * S ) / s1; 
    double h2 = ( 2 * S ) / s2; 
    double h3 = ( 2 * S ) / s3; 

    std::cout << "Высоты треугольника равны: " << h1 << " " << h2 << " " << h3 << std::endl;

    double m3 = 0.5 * sqrt( (2 * pow(s1, 2)) + (2 * pow(s2, 2)) - pow( s3, 2));
    double m2 = 0.5 * sqrt( (2 * pow(s1, 2)) + (2 * pow(s3, 2)) - pow( s2, 2));
    double m1 = 0.5 * sqrt( (2 * pow(s2, 2)) + (2 * pow(s3, 2)) - pow( s1, 2));

    std::cout << "Медианы треугольника равны: " << m1 << " " << m2 << " " << m3 << std::endl;
    

    double b1 = sqrt( (s2 * s3 * ( 1 - pow( s1, 2 ) / pow(s2 + s3, 2))));
    double b2 = sqrt( (s1 * s3 * ( 1 - pow( s2, 2 ) / pow(s1 + s3, 2))));
    double b3 = sqrt( (s1 * s2 * ( 1 - pow( s3, 2 ) / pow(s1 + s2, 2))));

    std::cout << "Биссектрисы треугольника равны: " << b1 << " " << b2 << " " << b3 << std::endl;
    

    double r1 = acos((s2*s2 + s3*s3 - s1*s1) / (2.0 * s2 * s3));
    double r2 = acos((s1*s1 + s3*s3 - s2*s2) / (2.0 * s1 * s3));
    double r3 = acos((s1*s1 + s2*s2 - s3*s3) / (2.0 * s1 * s2)); 

    double g1 = r1 * 180.0 / M_PI;
    double g2 = r2 * 180.0 / M_PI;
    double g3 = r3 * 180.0 / M_PI;

    std::cout << "Углы треугольника в радианах равны: " << r1 << " " << r2 << " " << r3 << std::endl;
    std::cout << "Углы треугольника в градусах равны: " << g1 << " " << g2 << " " << g3 << std::endl;

    double S1 = 0.5 * std::abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
    p = (s1 + s2 + s3) / 2.0;
    double S2 = std::sqrt(p * (p - s1) * (p - s2) * (p - s3));
    double S3 = 0.5 * s1 * s2 * sin(r3);

    double r = S1 / p;
    double R = ( s1 * s2 * s3 ) / ( 4 * S1 );

    std::cout << "Радиус вписанной окружности равен: " << r << std::endl;
    std::cout << "Радиус описанной окружности равен: " << R << std::endl;

    double lr = 2 * M_PI * r;
    double lR = 2 * M_PI * R;
    double Sr = M_PI * pow(r, 2);
    double SR = M_PI * pow(R, 2);

    std::cout << "Длина и площадь вписанной окружности равны: " << lr << " " << Sr << std::endl;
    std::cout << "Длина и площадь описанной окружности равны: " << lR << " " << SR << std::endl;

    std::cout << "Площадь(тремя способами)б периметр и полупериметр треугольника равны: " << S1 << " " << S2 << " " << S3 << " " << p * 2 << " " << p << std::endl; 

    return 0; }