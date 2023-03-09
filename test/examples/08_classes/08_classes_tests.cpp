#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "bank_account.h"
#include "savings_account.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test checking one param constructor")
{
	BankAccount account(100);

	REQUIRE(account.get_balance() == 100);
}

TEST_CASE("Test checking get balance ")
{
	BankAccount account;
	
	REQUIRE(account.get_balance() > 0);
	REQUIRE(account.get_balance() <= 10000);
}

TEST_CASE("Test checking deposit")
{
	BankAccount account(500);

	REQUIRE(account.get_balance() == 500);

	account.deposit(50);
	REQUIRE(account.get_balance() == 550);

	account.deposit(-50);
	REQUIRE(account.get_balance() == 550);
}

TEST_CASE("Test checking withdraw")
{
	BankAccount account(500);
	REQUIRE(account.get_balance() == 500);

	account.withdraw(50);
	REQUIRE(account.get_balance() == 450);
}

TEST_CASE("Test checking withdraw with invalid amount")
{
	BankAccount account(500);
	REQUIRE(account.get_balance() == 500);

	account.withdraw(-50);
	REQUIRE(account.get_balance() == 500);
}

TEST_CASE("Test checking withdraw with amount gt balance")
{
	BankAccount account(500);
	REQUIRE(account.get_balance() == 500);

	account.withdraw(501);
	REQUIRE(account.get_balance() == 500);
}

TEST_CASE("Test bank and savings account get balance overridden")
{
	BankAccount account(100);
	REQUIRE(account.get_balance() == 100);

	SavingsAccount savings(100);
	REQUIRE(account.get_balance() == 105);
}