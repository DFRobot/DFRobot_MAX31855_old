class MAX31855:
  def __init__(self,i2c):
    self.i2c = i2c
    
  def readData(self):
    i = 0
#    buf = i2c.readfrom_mem(16,0x00,4)
    a = self.i2c.readfrom_mem(16,0x00,1)[0]
    b = self.i2c.readfrom_mem(16,0x01,1)[0]
    d = self.i2c.readfrom_mem(16,0x03,1)[0]
    return a,b,d
    
  def readCelsius(self):
    a,b,d = self.readData()
    if(d&0x7):
      return None
    if(a&0x80):
      a = 0xff - a
      b = 0xff - b
      temp = ((a << 8) | b) >> 4
      return -(temp+1)
    temp = ((a << 8) | b) >> 4
    return temp
