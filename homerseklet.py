with open("files\homserseklet.txt", "r") as file:
    data_map = {}
    value = 0
    record_base = ""

    for i in file:
        data = i.strip().split()
        data_map[data[0]] = int(data[-1])

    for k, v in data_map.items():
        if v > value:
            value = v
            record_base = k

    print(record_base, value)