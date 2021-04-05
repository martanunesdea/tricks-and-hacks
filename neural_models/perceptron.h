#include <algorithm>
#include <vector>
#include <iostream>
#include <random>
#include <cmath>
#include <time.h>

class Perceptron {
    public:
    std::vector<double> weights;
    double bias;

    Perceptron(int inputs, double bias=1.0);
    void set_weights(std::vector<double> w_init);
    double sigmoid(double x);
    double run(std::vector<double> x);
};


class MultiLayerPerceptron {
    public:
        MultiLayerPerceptron(std::vector<int> layers, double bias=1.0, double eta=0.5);
        void set_weights(std::vector<std::vector<std::vector<double> > > w_init);
        void print_weights();
        std::vector<double> run(std::vector<double> x);
        double bp(std::vector<double> x, std::vector<double> y);

        std::vector<int> layers;
        double bias;
        double eta;
        std::vector<std::vector<Perceptron> > network;
        std::vector<std::vector<double> > values;
        std::vector<std::vector<double> > d;
}