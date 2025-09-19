#dg 6th Good day

import datetime
current = datetime.datetime.now()
hour = current.hour
hour_of_day= (f"the current hour in millitary time is{hour}")
if hour <= 9:
    print("good morning")
elif hour <= 12:
    print("good afternoon")
elif hour <= 17:
    print("good evening")
elif hour <= 21:
