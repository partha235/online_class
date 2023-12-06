class Mobile:
    def __init__(self, company, rate, ram, storage):
        self.company = company
        self.ram = ram
        self.rate = rate
        self.storage = storage

    def customer_needs(self, new_company=None):  # Corrected method name
        if new_company:
            self.company = new_company
        print("Customer needs {} with RAM of {} GB and storage of {} GB".format(self.company, self.ram, self.storage))


x1 = Mobile("oppo", 10000, 16, 256)
x1.customer_needs("nokia")
                    