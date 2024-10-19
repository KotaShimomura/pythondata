# pythonの勉強

df['caption'] = df.apply(lambda row: (
    f"This scene is located {row['交差点からの距離']} meters from the nearest intersection. "
    f"The road has a gradient of {row['道路勾配']} degrees, with a curve radius of {row['曲線半径']} meters. "
    f"The road follows a {row['道路形状']} layout, and traffic is controlled by a {row['信号機']}. "
    f"Pedestrian and vehicle zones are divided by {row['歩車道区分']}, and the lanes are separated by {row['中央分離帯']}. "
    f"The road width is approximately {row['車道幅員']}."
), axis=1)
