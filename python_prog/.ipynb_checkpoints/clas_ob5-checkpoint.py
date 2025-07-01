class mobile:
    def __init__(self,company,rate,ram,storage):
        self.company=company
        self.ram=ram
        self.rate=rate
        self.storage=storage

    def mobile_need(self):
        print("customer need {} with ram of {} GB and storage of{} GB".format(self.company,self.ram,self.storage))

class computer(mobile):
    def __init__(self,processor,rate,ram,storage,company=None):
        self.processor=processor
        super().__init__(company,rate,ram,storage)

    def comp_need(self):
        print("customer need {} with ram of {} GB and storage of {} GB".format(self.processor,self.ram,self.storage))

x2=computer(processor="i5",rate=35000,ram=32,storage="1TB")
x2.comp_need()
x2.processor="i3"
x2.comp_need()
print(x2.processor)

x1=mobile("oppo",10000,16,256)
x1.mobile_need()