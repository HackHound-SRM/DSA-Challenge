hour = int(input("Enter time in 12hr clock format HH:MM AM/PM: ").split(':')[0])
minute = int(input().split(':')[1].split()[0])
t = input().split(':')[1].split()[1]
if t.lower() == 'p':
    hour = hour + 12
if minute == 0 and hour < 10:
    print("\n0%d%d0" % (hour, minute))
elif minute == 0:
    print("\n%d%d0" % (hour, minute))
elif hour < 10:
    print("\n0%d%d" % (hour, minute))
else:
    print("\n%d%d" % (hour, minute))
