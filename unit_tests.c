#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "gameHeader.h"
#include "unity.h"


void test_universe_generation() {
	w = 30;
	h = 30;
	generate();
	TEST_ASSERT_NOT_NULL_MESSAGE(univ,"Universe returned a null pointer");
}

void test_universe_blinker() {
	int counter = 0;
	w = 5;
	h = 5;
	e = 5;
	unsigned universe[5][5] = {
		{0,0,0,0,0},
		{0,0,1,0,0},
		{0,0,1,0,0},
		{0,0,1,0,0},
		{0,0,0,0,0}
	};
	univ = &universe;
	evolve();
	unsigned (*board)[h] = univ;
	unsigned new[5][5] = {
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,1,1,1,0},
		{0,0,0,0,0},
		{0,0,0,0,0}
	};
	for_ij{
		if (board[i][j] == new[i][j]){
			counter++;
		}
	}
	TEST_ASSERT_TRUE(counter == 25)
}

void test_mid_death() {
	int counter = 0;
	w = 5;
	h = 5;
	e = 5;
	unsigned universe[5][5] = {
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,1,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0}
	};
	univ = &universe;
	evolve();
	unsigned (*board)[h] = univ;
	unsigned new[5][5] = {
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0}
	};
	for_ij{
		if (board[i][j] == new[i][j]){
			counter++;
		}
	}
	TEST_ASSERT_TRUE(counter == 25)
}

void test_mid_death2() {
	int counter = 0;
	w = 5;
	h = 5;
	e = 5;
	unsigned universe[5][5] = {
		{0,0,0,0,0},
		{0,0,1,0,0},
		{0,0,1,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0}
	};
	univ = &universe;
	evolve();
	unsigned (*board)[h] = univ;
	unsigned new[5][5] = {
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0}
	};
	for_ij{
		if (board[i][j] == new[i][j]){
			counter++;
		}
	}
	TEST_ASSERT_TRUE(counter == 25)
}

void test_birth() {
	int counter = 0;
	w = 5;
	h = 5;
	e = 5;
	unsigned universe[5][5] = {
		{0,0,0,0,0},
		{0,0,1,0,0},
		{0,1,1,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0}
	};
	univ = &universe;
	evolve();
	unsigned (*board)[h] = univ;
	unsigned new[5][5] = {
		{0,0,0,0,0},
		{0,1,1,0,0},
		{0,1,1,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0}
	};
	for_ij{
		if (board[i][j] == new[i][j]){
			counter++;
		}
	}
	TEST_ASSERT_TRUE(counter == 25)
}

void test_corner_death() {
	int counter = 0;
	w = 5;
	h = 5;
	e = 5;
	unsigned universe[5][5] = {
		{1,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0}
	};
	univ = &universe;
	evolve();
	unsigned (*board)[h] = univ;
	unsigned new[5][5] = {
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0}
	};
	for_ij{
		if (board[i][j] == new[i][j]){
			counter++;
		}
	}
	TEST_ASSERT_TRUE(counter == 25)
}

void test_top_death() {
	int counter = 0;
	w = 5;
	h = 5;
	e = 5;
	unsigned universe[5][5] = {
		{0,0,1,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0}
	};
	univ = &universe;
	evolve();
	unsigned (*board)[h] = univ;
	unsigned new[5][5] = {
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0}
	};
	for_ij{
		if (board[i][j] == new[i][j]){
			counter++;
		}
	}
	TEST_ASSERT_TRUE(counter == 25)
}

void test_corner2_death() {
	int counter = 0;
	w = 5;
	h = 5;
	e = 5;
	unsigned universe[5][5] = {
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,1}
	};
	univ = &universe;
	evolve();
	unsigned (*board)[h] = univ;
	unsigned new[5][5] = {
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0}
	};
	for_ij{
		if (board[i][j] == new[i][j]){
			counter++;
		}
	}
	TEST_ASSERT_TRUE(counter == 25)
}

void test_bottom_death() {
	int counter = 0;
	w = 5;
	h = 5;
	e = 5;
	unsigned universe[5][5] = {
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,1,0,0}
	};
	univ = &universe;
	evolve();
	unsigned (*board)[h] = univ;
	unsigned new[5][5] = {
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0}
	};
	for_ij{
		if (board[i][j] == new[i][j]){
			counter++;
		}
	}
	TEST_ASSERT_TRUE(counter == 25)
}

void test_stayin_alive() {
	int counter = 0;
	w = 5;
	h = 5;
	e = 1;
	unsigned universe[5][5] = {
		{0,0,0,0,0},
		{0,1,0,1,0},
		{0,0,1,0,0},
		{0,1,0,0,0},
		{0,0,0,0,0}
	};
	univ = &universe;
	evolve();
	unsigned (*board)[h] = univ;
	unsigned new[5][5] = {
		{0,0,0,0,0},
		{0,0,1,0,0},
		{0,1,1,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0}
	};
	for_ij{
		if (board[i][j] == new[i][j]){
			counter++;
		}
	}
	TEST_ASSERT_TRUE(counter == 25)
}

void test_universe_import() {
	import();
	TEST_ASSERT_NOT_NULL_MESSAGE(univ,"Universe returned a null pointer");
}

void test_universe_export(){
	w = 30;
	h = 30;
	generate();
	export();
	FILE *file;
	TEST_ASSERT_TRUE(file = fopen("Universe.txt", "r"))
	fclose(file);
}
void setUp() {
	 //this function is called before each test, it can be empty
}

void tearDown() {
	 //this function is called after each test, it can be empty
}

int main() {
	UNITY_BEGIN();
	RUN_TEST(test_universe_generation);
	RUN_TEST(test_universe_blinker);
	RUN_TEST(test_mid_death);
	RUN_TEST(test_mid_death2);
	RUN_TEST(test_corner_death);
	RUN_TEST(test_corner2_death);
	RUN_TEST(test_top_death);
	RUN_TEST(test_bottom_death);
	RUN_TEST(test_birth);
	RUN_TEST(test_stayin_alive);
	RUN_TEST(test_universe_import);
	RUN_TEST(test_universe_export);
	return UNITY_END();
}
