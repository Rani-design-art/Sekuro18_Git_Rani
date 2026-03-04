#include <iostream>
using namespace std;

class RobotPemadam {
private:
    int jarak;
    string status;
public:
    void inputSensor(int jarak) {
        this -> jarak = jarak;
    }
    void prosesLogika() {
        if (jarak > 20) {
            status = "Maju Mencari Api";
        }
        else if (jarak <= 20 && jarak > 5) {
            status = "UDAH DEKET NIH BRAY";
        }
        else
            status = "Posisi Tepat! gas semprot kali ya!";
    }
    void cetakStatus() {
        cout << "[Sensor: " << jarak << " cm]" << " Action: " << "[" << status << "]" << endl; 
    }
};

int main() {
    RobotPemadam robot;
    int jarak;
    int i = 0;

    while (true) {
        cout << "Masukkan angka= ";
        cin >> jarak;
        
        if (jarak == 67) {
            break;
        }
        robot.inputSensor(jarak);
        robot.prosesLogika();
        robot.cetakStatus();
    }
    
    return 0;
}
