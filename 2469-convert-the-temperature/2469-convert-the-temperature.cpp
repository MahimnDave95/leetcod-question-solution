class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double calsius ,fahrenhit,kelvin;

        kelvin = celsius + 273.15 ;
        fahrenhit = celsius*1.80+32.00;
        
        kelvin = (kelvin*100000)/100000;
        fahrenhit = (fahrenhit*100000)/100000;

        return {kelvin,fahrenhit};
    }
};