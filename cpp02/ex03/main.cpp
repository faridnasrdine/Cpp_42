/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafarid <nafarid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 15:51:23 by nafarid           #+#    #+#             */
/*   Updated: 2025/12/04 16:03:21 by nafarid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"


// void test_point(std::string name, Point const &A, Point const &B, Point const &C, Point const &P)
// {
//     std::cout << name << ": ";
//     if (bsp(A, B, C, P))
//         std::cout << "INSIDE" << std::endl;
//     else
//         std::cout << "OUTSIDE" << std::endl;
// }

// int main()
// {
//     // Triangle vertices
//     Point A(0, 0);
//     Point B(10, 0);
//     Point C(5, 10);

//     std::cout << "Triangle: A(0,0), B(10,0), C(5,10)\n\n";

//     // Inside point
//     test_point("Test 1 (inside)", A, B, C, Point(5, 5));

//     // Another inside
//     test_point("Test 2 (inside)", A, B, C, Point(4, 3));

//     // Outside
//     test_point("Test 3 (outside)", A, B, C, Point(20, 20));

//     // On edge AB -> should be OUTSIDE
//     test_point("Test 4 (on edge AB)", A, B, C, Point(5, 0));

//     // On edge AC -> should be OUTSIDE
//     test_point("Test 5 (on edge AC)", A, B, C, Point(2.5, 5));

//     // On vertex A -> should be OUTSIDE
//     test_point("Test 6 (vertex A)", A, B, C, Point(0, 0));

//     return 0;
// }

int main() {
    Point A(0,0);
    Point B(5,0);
    Point C(0,5);

    struct TestPoint {
        Point p;
        std::string expected;
    };

    TestPoint tests[] = {
        {Point(1,1), "inside"},   // clearly inside
        {Point(2,2), "inside"},   // still inside
        {Point(0,0), "outside"},  // vertex (strictly inside)
        {Point(5,0), "outside"},  // vertex
        {Point(0,5), "outside"},  // vertex
        {Point(2.5,0), "outside"},// on edge AB
        {Point(0,2.5), "outside"},// on edge AC
        {Point(2,3), "inside"},   // inside
        {Point(-1,1), "outside"}, // outside
        {Point(6,6), "outside"},  // far outside
    };

    for (const auto &test : tests) {
        std::cout << "Testing point: " << test.p << "\t";
        bool result = bsp(A,B,C,test.p);
        std::string output = result ? "inside" : "outside";
        std::cout << "Result = " << output;
        if (output == test.expected)
            std::cout << " ✅ OK\n";
        else
            std::cout << " ❌ KO (expected: " << test.expected << ")\n";
    }

    return 0;
}
