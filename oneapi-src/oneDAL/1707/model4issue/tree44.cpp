 /*
This file is auto generated by compile_lightgbm_model,
DO NOT MODIFY IT.
*/

#include <daal.h>
using namespace daal::algorithms::gbt::regression;
void buildTree44(ModelBuilder &builder, ModelBuilder::NodeId nodeIds[]) {
    ModelBuilder::TreeId treeId;
    treeId = builder.createTree(61);
    nodeIds[1] = builder.addSplitNode(treeId, nodeIds[0], 0, 27, (DAAL_DATA_TYPE)1.0105000000000002);
    nodeIds[2] = builder.addSplitNode(treeId, nodeIds[1], 0, 26, (DAAL_DATA_TYPE)0.87350000000000005);
    nodeIds[3] = builder.addSplitNode(treeId, nodeIds[2], 0, 27, (DAAL_DATA_TYPE)0.84050000000000014);
    nodeIds[4] = builder.addSplitNode(treeId, nodeIds[3], 0, 25, (DAAL_DATA_TYPE)0.94550000000000012);
    nodeIds[5] = builder.addSplitNode(treeId, nodeIds[4], 0, 3, (DAAL_DATA_TYPE)0.42050000000000004);
    nodeIds[6] = builder.addSplitNode(treeId, nodeIds[5], 0, 12, (DAAL_DATA_TYPE)1.6610000000000003);
    nodeIds[7] = builder.addSplitNode(treeId, nodeIds[6], 0, 17, (DAAL_DATA_TYPE)0.93150000000000011);
    nodeIds[8] = builder.addSplitNode(treeId, nodeIds[7], 0, 13, (DAAL_DATA_TYPE)0.97550000000000014);
    builder.addLeafNode(treeId, nodeIds[8], 0, (DAAL_DATA_TYPE)0.0075953005077807534);
    builder.addLeafNode(treeId, nodeIds[8], 1, (DAAL_DATA_TYPE)-0.010218600593507291);
    builder.addLeafNode(treeId, nodeIds[7], 1, (DAAL_DATA_TYPE)0.013757757073448552);
    nodeIds[12] = builder.addSplitNode(treeId, nodeIds[6], 1, 24, (DAAL_DATA_TYPE)0.82050000000000012);
    builder.addLeafNode(treeId, nodeIds[12], 0, (DAAL_DATA_TYPE)-0.0073506610230966059);
    builder.addLeafNode(treeId, nodeIds[12], 1, (DAAL_DATA_TYPE)0.0068314929838691439);
    nodeIds[15] = builder.addSplitNode(treeId, nodeIds[5], 1, 19, (DAAL_DATA_TYPE)-1.1174999999999999);
    nodeIds[16] = builder.addSplitNode(treeId, nodeIds[15], 0, 13, (DAAL_DATA_TYPE)0.53150000000000019);
    builder.addLeafNode(treeId, nodeIds[16], 0, (DAAL_DATA_TYPE)-0.0075707564977082337);
    builder.addLeafNode(treeId, nodeIds[16], 1, (DAAL_DATA_TYPE)0.0064106911333168259);
    nodeIds[19] = builder.addSplitNode(treeId, nodeIds[15], 1, 17, (DAAL_DATA_TYPE)1.0295000000000003);
    nodeIds[20] = builder.addSplitNode(treeId, nodeIds[19], 0, 4, (DAAL_DATA_TYPE)-1.6224999999999998);
    builder.addLeafNode(treeId, nodeIds[20], 0, (DAAL_DATA_TYPE)-0.01597909527746114);
    builder.addLeafNode(treeId, nodeIds[20], 1, (DAAL_DATA_TYPE)-0.0021674196302133093);
    builder.addLeafNode(treeId, nodeIds[19], 1, (DAAL_DATA_TYPE)0.0021184718198314005);
    nodeIds[24] = builder.addSplitNode(treeId, nodeIds[4], 1, 4, (DAAL_DATA_TYPE)-0.99449999999999983);
    builder.addLeafNode(treeId, nodeIds[24], 0, (DAAL_DATA_TYPE)-0.011843634846395459);
    nodeIds[26] = builder.addSplitNode(treeId, nodeIds[24], 1, 0, (DAAL_DATA_TYPE)1.1415000000000002);
    nodeIds[27] = builder.addSplitNode(treeId, nodeIds[26], 0, 13, (DAAL_DATA_TYPE)0.89450000000000018);
    builder.addLeafNode(treeId, nodeIds[27], 0, (DAAL_DATA_TYPE)-0.0058028044473183785);
    nodeIds[29] = builder.addSplitNode(treeId, nodeIds[27], 1, 9, (DAAL_DATA_TYPE)0.65550000000000008);
    builder.addLeafNode(treeId, nodeIds[29], 0, (DAAL_DATA_TYPE)-0.0051244226694107057);
    builder.addLeafNode(treeId, nodeIds[29], 1, (DAAL_DATA_TYPE)0.0092044757286968981);
    builder.addLeafNode(treeId, nodeIds[26], 1, (DAAL_DATA_TYPE)-0.012022988125681878);
    nodeIds[33] = builder.addSplitNode(treeId, nodeIds[3], 1, 21, (DAAL_DATA_TYPE)0.98650000000000004);
    builder.addLeafNode(treeId, nodeIds[33], 0, (DAAL_DATA_TYPE)-0.008690052996775147);
    nodeIds[35] = builder.addSplitNode(treeId, nodeIds[33], 1, 23, (DAAL_DATA_TYPE)0.99750000000000016);
    builder.addLeafNode(treeId, nodeIds[35], 0, (DAAL_DATA_TYPE)0.0094911293408205342);
    builder.addLeafNode(treeId, nodeIds[35], 1, (DAAL_DATA_TYPE)-0.0074277144235869244);
    nodeIds[38] = builder.addSplitNode(treeId, nodeIds[2], 1, 10, (DAAL_DATA_TYPE)-1.4304999999999997);
    nodeIds[39] = builder.addSplitNode(treeId, nodeIds[38], 0, 11, (DAAL_DATA_TYPE)-1.0064999999999997);
    builder.addLeafNode(treeId, nodeIds[39], 0, (DAAL_DATA_TYPE)-0.014126925542950631);
    builder.addLeafNode(treeId, nodeIds[39], 1, (DAAL_DATA_TYPE)-0.0011270353236259559);
    nodeIds[42] = builder.addSplitNode(treeId, nodeIds[38], 1, 25, (DAAL_DATA_TYPE)1.0335000000000003);
    nodeIds[43] = builder.addSplitNode(treeId, nodeIds[42], 0, 25, (DAAL_DATA_TYPE)0.79550000000000021);
    nodeIds[44] = builder.addSplitNode(treeId, nodeIds[43], 0, 3, (DAAL_DATA_TYPE)0.78150000000000019);
    nodeIds[45] = builder.addSplitNode(treeId, nodeIds[44], 0, 10, (DAAL_DATA_TYPE)0.15750000000000003);
    builder.addLeafNode(treeId, nodeIds[45], 0, (DAAL_DATA_TYPE)0.00065133903060377257);
    nodeIds[47] = builder.addSplitNode(treeId, nodeIds[45], 1, 13, (DAAL_DATA_TYPE)0.82350000000000001);
    builder.addLeafNode(treeId, nodeIds[47], 0, (DAAL_DATA_TYPE)-0.01529305794172817);
    builder.addLeafNode(treeId, nodeIds[47], 1, (DAAL_DATA_TYPE)-0.0010798673331737518);
    nodeIds[50] = builder.addSplitNode(treeId, nodeIds[44], 1, 22, (DAAL_DATA_TYPE)1.0605000000000002);
    builder.addLeafNode(treeId, nodeIds[50], 0, (DAAL_DATA_TYPE)0.0014543166913991345);
    builder.addLeafNode(treeId, nodeIds[50], 1, (DAAL_DATA_TYPE)0.010402415564347959);
    builder.addLeafNode(treeId, nodeIds[43], 1, (DAAL_DATA_TYPE)0.0051004721239532704);
    nodeIds[54] = builder.addSplitNode(treeId, nodeIds[42], 1, 24, (DAAL_DATA_TYPE)1.4775000000000003);
    builder.addLeafNode(treeId, nodeIds[54], 0, (DAAL_DATA_TYPE)-0.00026815661017163004);
    builder.addLeafNode(treeId, nodeIds[54], 1, (DAAL_DATA_TYPE)0.0118503573717493);
    nodeIds[57] = builder.addSplitNode(treeId, nodeIds[1], 1, 0, (DAAL_DATA_TYPE)1.5030000000000003);
    builder.addLeafNode(treeId, nodeIds[57], 0, (DAAL_DATA_TYPE)-0.00074822330014208719);
    nodeIds[59] = builder.addSplitNode(treeId, nodeIds[57], 1, 6, (DAAL_DATA_TYPE)1.3405000000000002);
    builder.addLeafNode(treeId, nodeIds[59], 0, (DAAL_DATA_TYPE)-0.0058106094016693536);
    builder.addLeafNode(treeId, nodeIds[59], 1, (DAAL_DATA_TYPE)0.0069245236104025559);

}
