const path = require('path')

module.exports = {
  entry: {
    test: './test/root.js'
  },
  output: {
    path: path.join(__dirname, 'bundledOutputs'),
    filename: '[name].js'
  }
}
