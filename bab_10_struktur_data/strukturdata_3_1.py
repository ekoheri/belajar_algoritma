import json

class TreeNode:
    def __init__(self, name):
        self.name = name
        self.children = []

    def add_child(self, child_node):
        self.children.append(child_node)

    def to_dict(self):
        if not self.children:
            return {"name": self.name}
        return {
            "name": self.name, "children": 
            [child.to_dict() for child in self.children]
        }

# Membuat struktur pohon keluarga
nabi = TreeNode("Nabi Muhammad SAW")
putra1 = TreeNode("Sayyidina al-Qasim bin Muhammad SAW")
putra2 = TreeNode("Sayyidah Zainab binti Muhammad SAW")
putra3 = TreeNode("Sayyidah Ruqayyah bin Muhammad SAW")
putra4 = TreeNode("Sayyidah Ummu Kultsum binti Muhammad SAW")
putra5 = TreeNode("Sayyidah Fatimah az-Zahra binti Muhammad SAW")
putra6 = TreeNode("Sayyidina Abdullah bin Muhammad SAW")
putra6 = TreeNode("Sayyidina Ibrahim bin Muhammad SAW")
cucu1 = TreeNode("Ali bin Abdul Ash")
cucu2 = TreeNode("Umamah binti Abdul Ash")
cucu3 = TreeNode("Abdullah bin Utsman bin Affan")
cucu4 = TreeNode("Hasan bin Ali bin Abi Thalib")
cucu5 = TreeNode("Husain bin Ali bin Abi Thalib")
cucu6 = TreeNode("Muhsin bin Ali bin Abi Thalib")
cucu7 = TreeNode("Zainab binti Ali bin Abi Thalib")
cucu8 = TreeNode("Ummu Kultsum binti Ali bin Abi Thalib")
nabi.add_child(putra1)
nabi.add_child(putra2)
nabi.add_child(putra3)
nabi.add_child(putra4)
nabi.add_child(putra5)
nabi.add_child(putra6)
putra2.add_child(cucu1)
putra2.add_child(cucu2)
putra3.add_child(cucu3)
putra5.add_child(cucu4)
putra5.add_child(cucu5)
putra5.add_child(cucu6)
putra5.add_child(cucu7)
putra5.add_child(cucu8)

# Mengonversi pohon keluarga ke format JSON
tree_json = json.dumps(nabi.to_dict(), indent=4)

# Mencetak pohon keluarga dalam format JSON
print(tree_json)
