class BankAccount:
    def __init__(self, balance):
        self.__balance = balance  # Private attribute

    def get_balance(self):
        return self.__balance
    
    def deposit(self,amount):
        self.__balance+=amount

account = BankAccount(1000)
account.deposit(500)
print(account.get_balance())  # This will raise an AttributeError
