TASK 1:

#include<iostream>

using namespace std;

class Calculator{

   private:

       float quation1, quation2, result;

       char ready;

    public:

          Calculator(){

              cout << "Calculator is ready!" << endl;
        }

         float calculate(int q1, int q2, char r){

            quation1 = q1;

            quation2 = q2;

            ready = r;

        if(ready == '+'){

                result = quation1 + quation2;

        } else if(ready == '-'){

                result = quation1 - quation2;

        } else if(ready == '*'){

                result = quation1 * quation2;

        } else if(ready == '/'){

                result = quation1 / quation2;

        }

            return result;

        }

        void showCalculation(){

            cout << quation1 << " " << ready << " " << quation2 << " = " << result << endl;

      }

};




TASK 2:

#include<iostream>

using namespace std;

class Shape{

    private:

        float quation1, quation2;

        string size;

    public:

        Shape(string s, float q1, float q2){

            size= s;

            quation1 = q1;

            quation2= q2;

     }

        void area(){

            float area;

            if(size == "Triangle"){

                area = (quation1 * quation2) / 2;

          } else if(size == "Square"){

                area = quation1 * quation2;

          } else if(size == "Rhombus"){

                area = (quation1 * quation2) / 2;

          } else if(size == "Rectangle"){

                area = quation1 * quation2;

          } else{

                cout << "Area: Shape show" << endl;

                return;

          }

            cout << "Area: " << area << endl;

     }

};

