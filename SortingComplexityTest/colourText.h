#pragma once

#include <string>

using namespace std;

class ColourText
{
private:
	ColourText() {

	}
	~ColourText() {

	}

public:
	static string get_textcolor_code(const int textcolor);

	static string get_backgroundcolor_code(const int backgroundcolor);
	static string get_print_color(const int textcolor);
	static string get_print_color(const int textcolor, const int backgroundcolor);
	static void print_color(const int textcolor);
	static void print_color(const int textcolor, const int backgroundcolor);
	static void print_color_reset();

	static void println(const string& s);
	static void print(const string& s);
	static void print(const string& s, const int textcolor);
	static void print(const string& s, const int textcolor, const int backgroundcolor);
	static void print_no_reset(const string& s, const int textcolor);
	static void print_no_reset(const string& s, const int textcolor, const int backgroundcolor);
};