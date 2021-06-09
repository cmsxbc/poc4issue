 /*
This file is auto generated by compile_lightgbm_model,
DO NOT MODIFY IT.
*/

#include <daal.h>
using namespace daal::algorithms::gbt::regression;
void buildTree58(ModelBuilder &builder, ModelBuilder::NodeId nodeIds[]) {
    ModelBuilder::TreeId treeId;
    treeId = builder.createTree(61);
    nodeIds[1] = builder.addSplitNode(treeId, nodeIds[0], 0, 25, (DAAL_DATA_TYPE)1.4915000000000003);
    nodeIds[2] = builder.addSplitNode(treeId, nodeIds[1], 0, 5, (DAAL_DATA_TYPE)2.3995000000000002);
    nodeIds[3] = builder.addSplitNode(treeId, nodeIds[2], 0, 18, (DAAL_DATA_TYPE)-0.05849999999999999);
    nodeIds[4] = builder.addSplitNode(treeId, nodeIds[3], 0, 26, (DAAL_DATA_TYPE)0.81150000000000022);
    nodeIds[5] = builder.addSplitNode(treeId, nodeIds[4], 0, 26, (DAAL_DATA_TYPE)0.79750000000000021);
    nodeIds[6] = builder.addSplitNode(treeId, nodeIds[5], 0, 17, (DAAL_DATA_TYPE)1.5715000000000001);
    builder.addLeafNode(treeId, nodeIds[6], 0, (DAAL_DATA_TYPE)-0.0026056570935858009);
    builder.addLeafNode(treeId, nodeIds[6], 1, (DAAL_DATA_TYPE)0.0086443649488501251);
    builder.addLeafNode(treeId, nodeIds[5], 1, (DAAL_DATA_TYPE)-0.012751902420731152);
    nodeIds[10] = builder.addSplitNode(treeId, nodeIds[4], 1, 27, (DAAL_DATA_TYPE)1.0105000000000002);
    nodeIds[11] = builder.addSplitNode(treeId, nodeIds[10], 0, 13, (DAAL_DATA_TYPE)1.1325000000000001);
    nodeIds[12] = builder.addSplitNode(treeId, nodeIds[11], 0, 6, (DAAL_DATA_TYPE)0.56250000000000011);
    builder.addLeafNode(treeId, nodeIds[12], 0, (DAAL_DATA_TYPE)0.0012166443565565688);
    nodeIds[14] = builder.addSplitNode(treeId, nodeIds[12], 1, 14, (DAAL_DATA_TYPE)0.61450000000000016);
    nodeIds[15] = builder.addSplitNode(treeId, nodeIds[14], 0, 11, (DAAL_DATA_TYPE)-0.89749999999999985);
    builder.addLeafNode(treeId, nodeIds[15], 0, (DAAL_DATA_TYPE)0.00096657738603394606);
    builder.addLeafNode(treeId, nodeIds[15], 1, (DAAL_DATA_TYPE)-0.012497623171657325);
    builder.addLeafNode(treeId, nodeIds[14], 1, (DAAL_DATA_TYPE)0.00076214737508078709);
    builder.addLeafNode(treeId, nodeIds[11], 1, (DAAL_DATA_TYPE)0.0039071551127326208);
    nodeIds[20] = builder.addSplitNode(treeId, nodeIds[10], 1, 0, (DAAL_DATA_TYPE)1.5285000000000002);
    nodeIds[21] = builder.addSplitNode(treeId, nodeIds[20], 0, 4, (DAAL_DATA_TYPE)1.6025000000000003);
    nodeIds[22] = builder.addSplitNode(treeId, nodeIds[21], 0, 9, (DAAL_DATA_TYPE)0.61450000000000016);
    nodeIds[23] = builder.addSplitNode(treeId, nodeIds[22], 0, 16, (DAAL_DATA_TYPE)1.9110000000000003);
    builder.addLeafNode(treeId, nodeIds[23], 0, (DAAL_DATA_TYPE)0.014352807425188296);
    builder.addLeafNode(treeId, nodeIds[23], 1, (DAAL_DATA_TYPE)-0.0010222536112580981);
    nodeIds[26] = builder.addSplitNode(treeId, nodeIds[22], 1, 1, (DAAL_DATA_TYPE)1.4635000000000002);
    nodeIds[27] = builder.addSplitNode(treeId, nodeIds[26], 0, 1, (DAAL_DATA_TYPE)0.97250000000000003);
    builder.addLeafNode(treeId, nodeIds[27], 0, (DAAL_DATA_TYPE)-0.0018904784708424953);
    builder.addLeafNode(treeId, nodeIds[27], 1, (DAAL_DATA_TYPE)0.012120621488429607);
    builder.addLeafNode(treeId, nodeIds[26], 1, (DAAL_DATA_TYPE)-0.012168314404509686);
    builder.addLeafNode(treeId, nodeIds[21], 1, (DAAL_DATA_TYPE)-0.013329276395961643);
    builder.addLeafNode(treeId, nodeIds[20], 1, (DAAL_DATA_TYPE)-0.0078500853910809382);
    nodeIds[33] = builder.addSplitNode(treeId, nodeIds[3], 1, 14, (DAAL_DATA_TYPE)-2.2449999999999997);
    builder.addLeafNode(treeId, nodeIds[33], 0, (DAAL_DATA_TYPE)-0.010600168382128079);
    nodeIds[35] = builder.addSplitNode(treeId, nodeIds[33], 1, 27, (DAAL_DATA_TYPE)1.2985000000000002);
    nodeIds[36] = builder.addSplitNode(treeId, nodeIds[35], 0, 6, (DAAL_DATA_TYPE)1.7735000000000001);
    nodeIds[37] = builder.addSplitNode(treeId, nodeIds[36], 0, 7, (DAAL_DATA_TYPE)-0.36649999999999994);
    builder.addLeafNode(treeId, nodeIds[37], 0, (DAAL_DATA_TYPE)0.0032402305337397952);
    nodeIds[39] = builder.addSplitNode(treeId, nodeIds[37], 1, 22, (DAAL_DATA_TYPE)1.0735000000000003);
    nodeIds[40] = builder.addSplitNode(treeId, nodeIds[39], 0, 22, (DAAL_DATA_TYPE)0.89650000000000019);
    nodeIds[41] = builder.addSplitNode(treeId, nodeIds[40], 0, 10, (DAAL_DATA_TYPE)1.8920000000000001);
    builder.addLeafNode(treeId, nodeIds[41], 0, (DAAL_DATA_TYPE)0.0020971779863561521);
    builder.addLeafNode(treeId, nodeIds[41], 1, (DAAL_DATA_TYPE)-0.011131502900804793);
    nodeIds[44] = builder.addSplitNode(treeId, nodeIds[40], 1, 10, (DAAL_DATA_TYPE)-0.84049999999999991);
    builder.addLeafNode(treeId, nodeIds[44], 0, (DAAL_DATA_TYPE)-0.0077297789341473321);
    nodeIds[46] = builder.addSplitNode(treeId, nodeIds[44], 1, 23, (DAAL_DATA_TYPE)1.3730000000000004);
    nodeIds[47] = builder.addSplitNode(treeId, nodeIds[46], 0, 6, (DAAL_DATA_TYPE)0.7835000000000002);
    builder.addLeafNode(treeId, nodeIds[47], 0, (DAAL_DATA_TYPE)0.00042959197201459419);
    builder.addLeafNode(treeId, nodeIds[47], 1, (DAAL_DATA_TYPE)-0.0064956962964252424);
    builder.addLeafNode(treeId, nodeIds[46], 1, (DAAL_DATA_TYPE)0.012149026766419411);
    builder.addLeafNode(treeId, nodeIds[39], 1, (DAAL_DATA_TYPE)0.0044437670979548148);
    nodeIds[52] = builder.addSplitNode(treeId, nodeIds[36], 1, 0, (DAAL_DATA_TYPE)0.9425);
    builder.addLeafNode(treeId, nodeIds[52], 0, (DAAL_DATA_TYPE)-0.012338752471841873);
    builder.addLeafNode(treeId, nodeIds[52], 1, (DAAL_DATA_TYPE)0.00072957546665118297);
    nodeIds[55] = builder.addSplitNode(treeId, nodeIds[35], 1, 22, (DAAL_DATA_TYPE)1.7940000000000003);
    builder.addLeafNode(treeId, nodeIds[55], 0, (DAAL_DATA_TYPE)-0.0064660670006504431);
    builder.addLeafNode(treeId, nodeIds[55], 1, (DAAL_DATA_TYPE)0.0047273510247468949);
    builder.addLeafNode(treeId, nodeIds[2], 1, (DAAL_DATA_TYPE)0.0063163509334225459);
    nodeIds[59] = builder.addSplitNode(treeId, nodeIds[1], 1, 17, (DAAL_DATA_TYPE)2.1615000000000006);
    builder.addLeafNode(treeId, nodeIds[59], 0, (DAAL_DATA_TYPE)-0.0030175083099989179);
    builder.addLeafNode(treeId, nodeIds[59], 1, (DAAL_DATA_TYPE)0.0070812149623105704);

}
