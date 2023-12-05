class mobile:
    def __init__(self,company,rate,ram,storage):
        self.company=company
        self.ram=ram
        self.rate=rate
        self.storage=storage

    def cos_need(self):
        print("customer need {} with ram of {} GB and storage of{} GB".format(self.company,self.ram,self.storage))


class computer(mobile):
    def __init__(self,processor,rate,ram,storage,company=None):
        self.processor=processor
        super().__init__(company,rate,ram,storage)

    def cust_nee(self):
        print("customer need {} with ram of {} GB and storage of{} GB".format(self.processor,self.ram,self.storage))

x2=computer("i5",35000,32,"1TB")
x2.cos_need()