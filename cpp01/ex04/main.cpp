/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafarid <nafarid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 17:06:54 by nafarid           #+#    #+#             */
/*   Updated: 2025/10/28 17:06:54 by nafarid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>


void replace_all(std::string &line, std::string &s1, std::string &s2) 
{
    if (s1.empty()) return; 
    size_t pos = 0;
    while ((pos = line.find(s1, pos)) != std::string::npos) {
        line.erase(pos, s1.length());
        line.insert(pos, s2);
        pos += s2.length();
    }
}

int main(int ac, char **av) {
    if (ac != 4) {
        std::cout << " invalid number of arguments\n";
        return 1;
    }

    std::string s1 = av[2];
    std::string s2 = av[3];
    std::ifstream infile(av[1]);
    

    std::string outname = std::string(av[1]) + "_replace";
    std::ofstream outfile(outname.c_str());

    std::string line;
    while (std::getline(infile, line)) {
        replace_all(line, s1, s2);
        outfile << line << '\n';
    }
    std::cout << "Output written to " << outname << std::endl;
    return 0;
}
