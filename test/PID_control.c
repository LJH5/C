#include <stdio.h>

double Kp = 1.0;    // proportional
double Ki = 0.1;    // integral
double Kd = 0.01;   // derivative

double previous_err = 0.0;
double integral = 0.0;

double PID_control(double target_value, double current_value) {

    // calculate err
    double err = target_value - current_value;

    // calculate intergral
    integral += err;

    // calculate derivative
    double derivative = err - previous_err;

    // calculate pid control value
    double output = Kp * err + Ki * integral + Kd * derivative;

    // update previous_err
    previous_err = err;

    return output;
}

int main() {
    double target_value = 100.0;
    double current_value = 0.0;
    double control_output;

    for (int i = 0; i < 100; i++) {
        control_output = PID_control(target_value, current_value);
        current_value += control_output;
        printf("Iteration %d: current Value = %.2f, Control Output = %.2f\n", i + 1, current_value, control_output);
    }

    return 0;
}
