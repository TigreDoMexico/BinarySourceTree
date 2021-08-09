import Tree from './tree.js'

const tree = new Tree()

tree.addValue(15)
tree.addValue(10)
tree.addValue(50)
tree.addValue(40)
tree.addValue(2)
tree.addValue(5)
tree.addValue(100)
tree.addValue(12)
tree.addValue(1)

tree.print()

tree.deleteValue(15)
tree.deleteValue(10)
//tree.deleteValue(2)

tree.print()

tree.searchValue(40)
tree.searchValue(16)

console.log(`A ARVORE POSSUI ${tree.numberOfNodesInTree()} ELEMENTOS`)
