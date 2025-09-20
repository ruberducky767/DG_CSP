#dg 6th Good day

import datetime
current = datetime.datetime.now()
hour = current.hour
print (f"the current hour in millitary time is{hour}")
if hour >= 21:
    print("good night")
elif hour >= 17:
    print("good evening")
elif hour >= 12:
    print("good good afternoon")
elif hour >= 9:
    print("good night")