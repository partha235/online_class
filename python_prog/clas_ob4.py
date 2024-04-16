class mobile:
    def __init__(self,company,rate,ram,storage):
        self.company=company
        self.ram=ram
        self.rate=rate
        self.storage=storage


    def cos_need(self):
        print("customer need {} with ram of {}GB and storage of {}GB".format(self.company,self.ram,self.storage))

x1=mobile("oppo",10000,16,256)
# print(type(x1))
# print(dir(x1))
x1.cos_need()