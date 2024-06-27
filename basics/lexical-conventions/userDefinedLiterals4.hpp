// Cooked Literals

#pragma once
#include<iostream>
#include<string>

struct Distance{
    private:
        explicit Distance(long double val): Kilometers(val)
        {}
        friend Distance operator "" _km(long double val);
        friend Distance operator "" _mi(long double val);

    long double Kilometers{0};
    public:
        const static long double km_per_mile;
        long double get_kilometers() { return Kilometers;}

        Distance operator+(Distance other){
            return Distance(get_kilometers() + other.get_kilometers());
        }

};

