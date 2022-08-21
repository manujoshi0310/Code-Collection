class Item:
    discount = 0.85
    def __init__(self, name, price, quantity):       #CONSTRUCTOR
        self.name = name
        self.price = price
        self.quantity = quantity
    def totalPrice(self, price, quantity):
        return price*quantity
    def applyDiscount(self):
        self.discount * self.totalPrice(self.price, self.quantity)